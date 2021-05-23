/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSString, PKInkParticleDescriptor;

@interface PKInkRenderingDescriptor : NSObject

{
    NSString *_identifier;
    unsigned long long _version;
    unsigned long long _type;
    unsigned long long _blendMode;
    PKInkParticleDescriptor *_particleDescriptor;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long blendMode;
@property (retain, nonatomic) PKInkParticleDescriptor *particleDescriptor;

@end
