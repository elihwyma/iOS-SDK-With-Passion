/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface SiriCoreSyncRecord : NSObject

{
    int _itemPriority;
    NSString *_key;
    NSString *_identifier;
    NSString *_debugValue;
    NSData *_dataValue;
    NSData *_addedValue;
    NSData *_metaValue;
    double _updateTime;
    NSData *_checkHash;
}

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) int itemPriority;
@property (retain, nonatomic) NSString *debugValue;
@property (retain, nonatomic) NSData *dataValue;
@property (retain, nonatomic) NSData *addedValue;
@property (retain, nonatomic) NSData *metaValue;
@property (nonatomic) double updateTime;
@property (retain, nonatomic) NSData *checkHash;

+ (id)syncRecordWithKey:(id)arg1 identifier:(id)arg2 priority:(int)arg3 debugValue:(id)arg4 dataValue:(id)arg5 addedValue:(id)arg6 appMeta:(id)arg7;
+ (id)syncRecordWithKey:(id)arg1 identifier:(id)arg2;

- (id)description;
- (void)updateHash;
- (id)initWithKey:(id)arg1 identifier:(id)arg2 priority:(int)arg3 debugValue:(id)arg4 dataValue:(id)arg5 addedValue:(id)arg6 appMeta:(id)arg7;
- (void)setUpdateTimeToNow;

@end
