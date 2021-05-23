/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CVMLFaceprint_LegacySupportDoNotChange : NSObject

{
    unsigned int _platform;
    unsigned int _profile;
    NSData *_faceprint;
    NSString *_key;
    NSString *_faceprintInputPath;
}

@property (retain) NSData *faceprint;
@property (copy) NSString *key;
@property unsigned int platform;
@property unsigned int profile;
@property (copy) NSString *faceprintInputPath;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
