/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SLVideoQualityOption : NSObject

{
    NSString *_identifier;
    NSString *_name;
    long long _size;
    NSString *_exportPreset;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long size;
@property (retain, nonatomic) NSString *exportPreset;

+ (id)videoQualityOptionForIdentifier:(id)arg1;

- (id)sizeDescription;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 exportPreset:(id)arg3 size:(long long)arg4;

@end
