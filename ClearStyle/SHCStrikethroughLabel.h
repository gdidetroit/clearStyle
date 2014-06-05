//
//  SHCStrikethroughLabel.h
//  ClearStyle
//

#import <Foundation/Foundation.h>

// A UILabel subclass that can optionally have a strikethrough
@interface SHCStrikethroughLabel : UITextField

// A boolean value that determines whether the label should have a strikethrough.
@property (nonatomic) bool strikethough;

@end
