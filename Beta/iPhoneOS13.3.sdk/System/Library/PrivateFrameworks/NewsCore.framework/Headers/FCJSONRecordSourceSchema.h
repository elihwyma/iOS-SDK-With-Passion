/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSArray, NSSet, NSString;

@interface FCJSONRecordSourceSchema : NSObject <Swift>

{
    NSString *_recordType;
    NSString *_recordIDPrefix;
    NSArray *_keys;
    NSArray *_localizableKeys;
    NSArray *_allKeys;
    NSSet *_localizableKeysSet;
}

@property (copy, nonatomic) NSSet *localizableKeysSet;
@property (copy, nonatomic, readonly) NSString *recordType;
@property (copy, nonatomic, readonly) NSString *recordIDPrefix;
@property (copy, nonatomic, readonly) NSArray *keys;
@property (copy, nonatomic, readonly) NSArray *localizableKeys;
@property (copy, nonatomic, readonly) NSArray *allKeys;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isLocalizableKey:(id)arg1;
- (id)initWithRecordType:(id)arg1 recordIDPrefix:(id)arg2 keys:(id)arg3 localizableKeys:(id)arg4;

@end
