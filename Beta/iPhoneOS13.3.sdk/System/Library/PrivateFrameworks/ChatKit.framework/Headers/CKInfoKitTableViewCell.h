/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UITableViewCell.h>

@class INKContentView;

__attribute__((visibility("hidden")))
@interface CKInfoKitTableViewCell : UITableViewCell

{
    INKContentView *_infoKitContentView;
}

@property (retain, nonatomic) INKContentView *infoKitContentView;

+ (id)identifier;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
