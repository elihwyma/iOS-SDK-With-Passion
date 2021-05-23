/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXComponentAnchor : NSObject

{
    NSString *_targetComponentIdentifier;
    long long _targetAnchorPosition;
    long long _originAnchorPosition;
    struct _NSRange _range;
}

@property (nonatomic) long long targetAnchorPosition;
@property (nonatomic) long long originAnchorPosition;
@property (nonatomic) struct _NSRange range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *targetComponentIdentifier;

- (id)initWithTargetComponentIdentifier:(id)arg1;

@end
