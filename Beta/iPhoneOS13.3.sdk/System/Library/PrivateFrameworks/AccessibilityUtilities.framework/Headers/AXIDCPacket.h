/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableData;

@interface AXIDCPacket : NSObject

{
    unsigned long long _totalLength;
    NSMutableData *_data;
}

@property (retain, nonatomic) NSMutableData *data;

+ (id)packetDataWithPayload:(id)arg1;
+ (CDStruct_6d9e24e6)headerFromData:(id)arg1;
+ (id)packetWithHeader:(CDStruct_6d9e24e6)arg1;

- (id)appendData:(id)arg1;
- (id)initWithHeader:(CDStruct_6d9e24e6)arg1;
- (unsigned long long)missingLength;
- (id)dataPayload;
- (id)objectPayload;

@end
