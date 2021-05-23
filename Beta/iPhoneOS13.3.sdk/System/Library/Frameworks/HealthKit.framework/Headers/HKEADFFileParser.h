/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface HKEADFFileParser : NSObject

{
    NSData *_data;
}

@property (retain, nonatomic) NSData *data;

- (id)initWithData:(id)arg1;
- (void)_enumerateHeadersWithHandler:(CDUnknownBlockType)arg1;
- (id)payloadInRange:(struct _NSRange)arg1;
- (void)enumerateChannelsWithHandler:(CDUnknownBlockType)arg1;
- (id)newBuilderWithStartDate:(id)arg1;

@end
