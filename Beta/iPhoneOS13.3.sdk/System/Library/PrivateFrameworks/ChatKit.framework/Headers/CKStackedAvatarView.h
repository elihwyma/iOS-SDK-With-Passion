/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIImageView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKStackedAvatarView : UIImageView

{
    NSArray *_contacts;
}

@property (copy, nonatomic, readonly) NSArray *contacts;

- (id)initWithContacts:(id)arg1;
- (id)_stackWithMonograms:(id)arg1;

@end
