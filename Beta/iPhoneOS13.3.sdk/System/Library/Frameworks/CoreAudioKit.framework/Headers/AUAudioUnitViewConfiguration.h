/*
 Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

#import <Foundation/NSObject.h>

@interface AUAudioUnitViewConfiguration : NSObject

{
    _Bool _hostHasController;
    double _width;
    double _height;
}

@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) _Bool hostHasController;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidth:(double)arg1 height:(double)arg2 hostHasController:(_Bool)arg3;

@end
