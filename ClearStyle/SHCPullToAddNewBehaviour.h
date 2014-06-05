//
//  SHCPullToRefreshBehaviour.h
//  ClearStyle
//

#import "SHCTableView.h"

@class SHCTableView;

// A behaviour that adds the facility to pull down on the to-do list in order to add a new item
//
@interface SHCPullToAddNewBehaviour : NSObject<UIScrollViewDelegate>

// associates this behaviour with the given table
- (id)initWithTableView:(SHCTableView*)tableView;

@end
