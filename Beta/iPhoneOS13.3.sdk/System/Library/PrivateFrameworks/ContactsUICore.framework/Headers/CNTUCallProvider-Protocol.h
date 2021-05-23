/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <ContactsUICore/Swift-Protocol.h>

@class NSSet, NSString;

@protocol CNTUCallProvider <Swift>

@property (copy, nonatomic, readonly) NSString *localizedName;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) _Bool supportsAudio;
@property (nonatomic, readonly) _Bool supportsVideo;
@property (copy, nonatomic, readonly) NSSet *supportedHandleTypes;

- (unsigned short)dialRequestForHandle:contact:video: /* Error: Ran out of types for this method. */;

@end
