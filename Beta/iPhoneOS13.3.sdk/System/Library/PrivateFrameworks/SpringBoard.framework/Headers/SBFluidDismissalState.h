/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBFluidDismissalState : NSObject

{
    double _backgroundWeighting;
    double _contentWeighting;
    long long _dismissalType;
    long long _transitionPhase;
    struct CGRect _contentRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double backgroundWeighting;
@property (nonatomic) double contentWeighting;
@property (nonatomic) struct CGRect contentRect;
@property (nonatomic) double backgroundWeighting;
@property (nonatomic) double contentWeighting;
@property (nonatomic) struct CGRect contentRect;
@property (nonatomic) long long dismissalType;
@property (nonatomic) long long transitionPhase;

@end
