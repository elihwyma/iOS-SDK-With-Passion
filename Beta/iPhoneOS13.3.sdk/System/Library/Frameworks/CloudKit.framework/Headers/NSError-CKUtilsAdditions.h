/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSError.h>

@interface NSError (CKUtilsAdditions)

@property (nonatomic, readonly, getter=isComparisonError) _Bool comparisonError;

+ (id)CKErrorWithPOSIXCode:(int)arg1;
+ (id)CKErrorFromErrno;

- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)CKClientSuitableError;
- (_Bool)CKIsPOSIXErrorCode:(long long)arg1;
- (_Bool)CKHasTopLevelUnderlyingError;
- (id)CKClientSuitableUnderlyingError;
- (_Bool)CKIsCKError;
- (_Bool)CKHasCKErrorInChildChain;
- (_Bool)CKIsNotFoundError;

@end
