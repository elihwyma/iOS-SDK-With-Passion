/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/Swift-Protocol.h>

@protocol WBSFluidProgressStateSource <Swift>

- (unsigned short)estimatedProgress;
- (unsigned short)expectedOrCurrentURL;
- (unsigned short)createFluidProgressState;
- (unsigned short)clearFluidProgressState;
- (unsigned short)progressState;
- (unsigned short)hasFailedURL;

@end
