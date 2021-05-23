/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSError.h>

@interface NSError (MFAccount)

- (_Bool)mf_isInaccessibleAccountCredentialError;
- (_Bool)mf_isMissingAccountCredentialError;
- (_Bool)mf_isUserCancelledError;
- (id)mf_moreInfo;
- (id)mf_shortDescription;
- (_Bool)mf_isSMIMEError;
- (_Bool)mf_shouldBeReportedToUser;
- (_Bool)mf_shouldFailDownload;

@end
