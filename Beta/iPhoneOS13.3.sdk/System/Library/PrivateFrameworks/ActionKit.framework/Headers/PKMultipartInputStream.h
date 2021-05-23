/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSInputStream.h>

@class NSData, NSMutableArray, NSString;

@protocol NSStreamDelegate;

@interface PKMultipartInputStream : NSInputStream

{
    id <NSStreamDelegate> delegate;
    NSString *_boundary;
    unsigned long long _length;
    NSMutableArray *_parts;
    NSData *_footer;
    unsigned long long _currentPart;
    unsigned long long _delivered;
    unsigned long long _status;
}

@property (retain, nonatomic) NSMutableArray *parts;
@property (retain, nonatomic) NSString *boundary;
@property (retain, nonatomic) NSData *footer;
@property (nonatomic) unsigned long long currentPart;
@property (nonatomic) unsigned long long delivered;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long status;

- (id)init;
- (void)open;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (unsigned long long)streamStatus;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)hasBytesAvailable;
- (void)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_e097db04)arg3;
- (void)_scheduleInCFRunLoop:(id)arg1 forMode:(id)arg2;
- (void)updateLength;
- (void)addPartWithName:(id)arg1 string:(id)arg2;
- (void)addPartWithName:(id)arg1 data:(id)arg2;
- (void)addPartWithName:(id)arg1 data:(id)arg2 contentType:(id)arg3;
- (void)addPartWithName:(id)arg1 filename:(id)arg2 data:(id)arg3 contentType:(id)arg4;
- (void)addPartWithName:(id)arg1 path:(id)arg2;
- (void)addPartWithName:(id)arg1 filename:(id)arg2 path:(id)arg3;
- (void)addPartWithName:(id)arg1 filename:(id)arg2 path:(id)arg3 contentType:(id)arg4;
- (void)addPartWithName:(id)arg1 filename:(id)arg2 stream:(id)arg3 streamLength:(unsigned long long)arg4;
- (void)addPartWithHeaders:(id)arg1 string:(id)arg2;
- (void)addPartWithHeaders:(id)arg1 path:(id)arg2;

@end
