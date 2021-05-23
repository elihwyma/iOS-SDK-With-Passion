/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface REMAuxiliaryChangeInfoFetchResult : NSObject

{
    NSArray *_auxiliaryChangeInfos;
    Class _typedKlass;
    NSMutableDictionary *_changeObjectForAuxiliaryChangeInfoMap;
}

@property (retain, nonatomic) NSArray *auxiliaryChangeInfos;
@property (nonatomic) Class typedKlass;
@property (retain, nonatomic) NSMutableDictionary *changeObjectForAuxiliaryChangeInfoMap;

+ (id)auxiliaryChangeInfoFetchResultOfType:(Class)arg1;

- (id)initWithAuxiliaryChangeInfoType:(Class)arg1;
- (id)changeObjectForAuxiliaryChangeInfo:(id)arg1;
- (id)auxiliaryChangeInfoFromData:(id)arg1 withObjectID:(id)arg2 fromChangeObject:(id)arg3 error:(id *)arg4;

@end
