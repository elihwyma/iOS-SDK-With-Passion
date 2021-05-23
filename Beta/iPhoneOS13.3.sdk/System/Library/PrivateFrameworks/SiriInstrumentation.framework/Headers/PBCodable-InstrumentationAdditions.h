/*
 Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

#import <ProtocolBuffer/PBCodable.h>

@interface PBCodable (InstrumentationAdditions)

- (int)getAnyEventType;
- (id)wrapAsAnyEvent;

@end
