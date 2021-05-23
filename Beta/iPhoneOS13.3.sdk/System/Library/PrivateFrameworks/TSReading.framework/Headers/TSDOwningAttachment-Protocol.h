/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@protocol TSDOwningAttachment <Swift>

@property (nonatomic, readonly) _Bool isDrawable;
@property (nonatomic, readonly) _Bool isAnchored;
@property (nonatomic, readonly) _Bool isPartitioned;
@property (nonatomic, readonly) _Bool isAttachedToBodyText;
@property (nonatomic, readonly) Class positionerClass;
@property (nonatomic, readonly) _Bool isSearchable;
@property (nonatomic, readonly) _Bool specifiesEnabledKnobMask;
@property (nonatomic, readonly) unsigned long long enabledKnobMask;

- (unsigned short)infoChanged;

@end
