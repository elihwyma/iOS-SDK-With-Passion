/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface PKStrokeProviderSliceIdentifier : NSObject

{
    double _tStart;
    double _tEnd;
    NSUUID *_strokeUUID;
    struct _PKStrokeID _version;
}

@property (nonatomic, readonly) double tStart;
@property (nonatomic, readonly) double tEnd;
@property (nonatomic, readonly) NSUUID *strokeUUID;
@property (nonatomic, readonly) struct _PKStrokeID version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUID:(id)arg1 version:(struct _PKStrokeID)arg2 tStart:(double)arg3 tEnd:(double)arg4;

@end
