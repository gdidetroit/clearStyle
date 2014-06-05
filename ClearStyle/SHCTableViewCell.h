//
//  SHCTableViewCell.h
//  ClearStyle
//

#import "SHCToDoItem.h"
#import "SHCTableViewCellDelegate.h"
#import "SHCStrikethroughLabel.h"

#import <UIKit/UIKit.h>

// A custom table cell that renders SHCToDoItem items.
//
@interface SHCTableViewCell : UITableViewCell <UITextFieldDelegate>

// The item that this cell renders
@property (nonatomic) SHCToDoItem* todoItem;

// The object that acts as delegate for this cell. 
@property (nonatomic, assign) id<SHCTableViewCellDelegate> delegate;

// the label used to render the to-do text
@property (nonatomic, assign, readonly) SHCStrikethroughLabel* label;

@end
