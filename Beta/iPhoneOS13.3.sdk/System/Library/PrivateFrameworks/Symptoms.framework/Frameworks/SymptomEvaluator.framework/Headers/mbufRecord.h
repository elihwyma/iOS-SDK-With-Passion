/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface mbufRecord : NSObject

{
    NSDate *_reportTime;
    unsigned long long _mbuf256BTotal;
    unsigned long long _mbuf2KBTotal;
    unsigned long long _mbuf4KBTotal;
    unsigned long long _mbuf16KBTotal;
    unsigned long long _sockMBcnt;
    unsigned long long _sockAtMBLimit;
    unsigned long long _mbufMemReleased;
    unsigned long long _mbufDrainCount;
    unsigned long long _sockSbMBFloor;
}

@property (nonatomic, readonly) NSDate *reportTime;
@property (nonatomic, readonly) unsigned long long mbuf256BTotal;
@property (nonatomic, readonly) unsigned long long mbuf2KBTotal;
@property (nonatomic, readonly) unsigned long long mbuf4KBTotal;
@property (nonatomic, readonly) unsigned long long mbuf16KBTotal;
@property (nonatomic, readonly) unsigned long long sockMBcnt;
@property (nonatomic, readonly) unsigned long long sockAtMBLimit;
@property (nonatomic, readonly) unsigned long long mbufMemReleased;
@property (nonatomic, readonly) unsigned long long mbufDrainCount;
@property (nonatomic, readonly) unsigned long long sockSbMBFloor;

- (id)description;
- (id)initWithReport:(id)arg1;
- (_Bool)isHighWaterMarkGiven:(id)arg1;

@end
