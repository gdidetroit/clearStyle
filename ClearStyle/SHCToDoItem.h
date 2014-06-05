//
//  SHCToDoItem.h
//  ClearStyle
//


#import <Foundation/Foundation.h>

// A model object that represents a single to-do item and its state.
//
@interface SHCToDoItem : NSObject

// A text description of this item.
@property (nonatomic, copy) NSString *text;

// A boolean value that determines the completed state of this item.
@property (nonatomic) BOOL completed;

// Returns an SHCToDoItem item initialised with the given text. 
- (id)initWithText:(NSString*) text;


// Returns an SHCToDoItem item initialised with the given text.  
+ (id)toDoItemWithText:(NSString*) text;

@end
