//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface CDSBasisObject : NSObject
{
    NSUInteger _localTime;
    NSDate *_creationDate;
    NSString *_basisValueString;
    NSUInteger _basisUint64Value;
    double _basisDoubleValue;
    NSUInteger _attributeId;
    BOOL _risingEdge;
    BOOL _fallingEdge;
    double _duration;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) NSUInteger attributeId; // @synthesize attributeId=_attributeId;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) BOOL fallingEdge; // @synthesize fallingEdge=_fallingEdge;
@property(nonatomic) BOOL risingEdge; // @synthesize risingEdge=_risingEdge;
@property(nonatomic) double basisDoubleValue; // @synthesize basisDoubleValue=_basisDoubleValue;
@property(nonatomic) NSUInteger basisUint64Value; // @synthesize basisUint64Value=_basisUint64Value;
@property(retain, nonatomic) NSString *basisValueString; // @synthesize basisValueString=_basisValueString;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) NSUInteger localTime; // @synthesize localTime=_localTime;
// - (void).cxx_destruct;
- (id)initWithLocalTime:(NSUInteger)arg1 creationDate:(id)arg2 basisValueString:(id)arg3 basisUint64Value:(NSUInteger)arg4 basisDoubleValue:(double)arg5 risingEdge:(BOOL)arg6 fallingEdge:(BOOL)arg7 duration:(double)arg8 attributeId:(NSUInteger)arg9 type:(long long)arg10;

@end

