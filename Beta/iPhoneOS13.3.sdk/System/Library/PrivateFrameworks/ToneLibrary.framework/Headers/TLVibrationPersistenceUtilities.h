/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@interface TLVibrationPersistenceUtilities : NSObject

+ (_Bool)_validateObjectWithError:(id *)arg1 validationBlock:(CDUnknownBlockType)arg2;
+ (_Bool)_objectIsValidUserGeneratedVibrationPattern:(id)arg1 error:(id *)arg2;
+ (_Bool)objectIsValidUserGeneratedVibrationPatternsDictionary:(id)arg1 error:(id *)arg2;
+ (id)userGeneratedVibrationStoreFileURL;

@end
