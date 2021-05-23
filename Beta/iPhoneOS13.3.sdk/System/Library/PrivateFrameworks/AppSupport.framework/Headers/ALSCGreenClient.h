/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@interface ALSCGreenClient : NSObject

{
    _Bool _cachingAllowed;
    _Bool _key1Value;
    _Bool _key2Value;
    _Bool _key3Value;
}

@property (nonatomic) _Bool key1Value;
@property (nonatomic) _Bool key2Value;
@property (nonatomic) _Bool key3Value;
@property (nonatomic, readonly) _Bool valuesFinalized;

- (id)init;
- (_Bool)_attemptReadingValuesFromDiskAndUpdateFileState;
- (_Bool)_readGreenKeysFromDictionary:(id)arg1;

@end
