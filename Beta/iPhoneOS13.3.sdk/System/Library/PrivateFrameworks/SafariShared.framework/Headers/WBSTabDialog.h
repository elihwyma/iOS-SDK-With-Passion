/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface WBSTabDialog : NSObject

{
    CDUnknownBlockType _presentationBlock;
    CDUnknownBlockType _dismissalBlock;
    _Bool _blocksWebProcessUntilDismissed;
    NSArray *_cancellationExemptions;
}

@property (nonatomic) _Bool blocksWebProcessUntilDismissed;
@property (copy, nonatomic) NSArray *cancellationExemptions;

+ (id)tabDialogWithPresentationBlock:(CDUnknownBlockType)arg1 dismissalBlock:(CDUnknownBlockType)arg2;

- (id)init;
- (id)_init;
- (id)createInfo;

@end
