/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@interface MLImageSize : NSObject <Swift>

{
    long long _pixelsWide;
    long long _pixelsHigh;
}

@property (readonly) long long pixelsWide;
@property (readonly) long long pixelsHigh;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2;
- (_Bool)isEqualToImageSize:(id)arg1;

@end
