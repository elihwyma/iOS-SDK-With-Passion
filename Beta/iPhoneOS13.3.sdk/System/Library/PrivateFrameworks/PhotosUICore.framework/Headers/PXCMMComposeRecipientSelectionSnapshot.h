/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PXCMMComposeRecipientSelectionSnapshot : NSObject

{
    NSArray *_selectedComposeRecipients;
    NSArray *_selectedRecipients;
}

@property (copy, nonatomic, readonly) NSArray *selectedComposeRecipients;
@property (copy, nonatomic, readonly) NSArray *selectedRecipients;

+ (id)new;

- (id)init;
- (id)initWithSelectedComposeRecipients:(id)arg1 selectedRecipients:(id)arg2;

@end
