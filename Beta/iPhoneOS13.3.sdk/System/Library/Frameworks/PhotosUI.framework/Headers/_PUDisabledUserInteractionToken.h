/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _PUDisabledUserInteractionToken : NSObject

{
    NSString *_identifier;
    long long _reason;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long reason;

- (id)description;

@end
