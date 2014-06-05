//
//  SHCToDoItem.m
//  ClearStyle
//

#import "SHCToDoItem.h"

@implementation SHCToDoItem

- (id)initWithText:(NSString*) text
{
    self = [super init];
    if (self) {
        self.text = text;
    }
    return self;
}

+ (id)toDoItemWithText:(NSString *)text
{
    return [[SHCToDoItem alloc] initWithText:text];
}

@end
