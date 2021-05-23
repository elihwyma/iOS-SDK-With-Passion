/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (FPAdditions)

@property (nonatomic, readonly) _Bool fp_isRemoteCrashError;
@property (nonatomic, readonly) _Bool fp_isSyncAnchorExpiredError;
@property (nonatomic, readonly) _Bool fp_isFeatureUnsupportedError;
@property (nonatomic, readonly) NSString *fp_prettyDescription;

+ (void)load;
+ (id)fp_errorWithPOSIXCode:(int)arg1;
+ (id)fp_errorWithPOSIXCode:(int)arg1 description:(id)arg2;
+ (id)fp_invalidArgumentError:(id)arg1;
+ (id)_fp_errorWithPOSIXCode:(int)arg1 itemURL:(id)arg2 debugDescription:(id)arg3 format:(id)arg4 arguments:(char *)arg5;
+ (id)fp_errorWithPOSIXCode:(int)arg1 itemURL:(id)arg2 debugDescription:(id)arg3;

- (id)fp_strippedError;
- (id)fp_annotatedErrorWithURL:(id)arg1 variant:(id)arg2;
- (id)fp_userInfoItem;
- (_Bool)fp_isFileProviderError:(long long)arg1;
- (id)fp_userInfoFPItem;
- (id)fp_internalErrorForVendorErrorWithItemCreationBlock:(CDUnknownBlockType)arg1;
- (id)fp_annotatedErrorWithItem:(id)arg1 variant:(id)arg2;
- (_Bool)fp_isCocoaErrorCode:(long long)arg1;
- (id)fp_asWarning;
- (id)fp_recoverableErrorWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)fp_isWarning;
- (id)fp_genericPreflightError;
- (id)fp_annotatedErrorWithItems:(id)arg1 variant:(id)arg2;
- (id)fp_annotatedErrorWithName:(id)arg1;
- (id)fp_userInfoValueForKey:(id)arg1;
- (id)fp_annotatedErrorWithName:(id)arg1 path:(id)arg2 variant:(id)arg3;
- (id)fp_annotatedErrorWithRecoveryAttempter:(id)arg1;
- (_Bool)fp_isGenericPreflightError;
- (id)fp_prettyDescription:(unsigned long long)arg1;
- (_Bool)fp_isPOSIXErrorCode:(int)arg1;
- (id)fp_annotatedErrorWithOperationItem:(id)arg1;

@end
