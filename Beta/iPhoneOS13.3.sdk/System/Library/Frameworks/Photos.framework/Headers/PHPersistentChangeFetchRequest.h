/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class PHPersistentChangeToken;

@interface PHPersistentChangeFetchRequest : NSObject

{
    PHPersistentChangeToken *_token;
    unsigned long long _maximumChangeThreshold;
}

@property (copy, nonatomic) PHPersistentChangeToken *token;
@property (nonatomic) unsigned long long maximumChangeThreshold;

@end
