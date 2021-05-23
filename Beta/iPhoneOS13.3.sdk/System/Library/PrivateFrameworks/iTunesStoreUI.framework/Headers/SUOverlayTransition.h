/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class SUDOMElement;

@interface SUOverlayTransition : NSObject

{
    double _duration;
    SUDOMElement *_sourceElement;
    long long _type;
}

@property (nonatomic) double duration;
@property (retain, nonatomic) SUDOMElement *sourceElement;
@property (nonatomic) long long type;

+ (_Bool)supportsSecureCoding;
+ (long long)transitionTypeFromString:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
