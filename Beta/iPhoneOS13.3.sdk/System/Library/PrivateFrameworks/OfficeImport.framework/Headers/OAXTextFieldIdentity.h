/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OITSUPair.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OAXTextFieldIdentity : OITSUPair

@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSString *type;

+ (id)identityWithGuid:(id)arg1 type:(id)arg2;

@end
