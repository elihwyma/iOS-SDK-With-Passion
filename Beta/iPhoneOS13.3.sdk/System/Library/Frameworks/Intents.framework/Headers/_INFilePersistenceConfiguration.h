/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _INFilePersistenceConfiguration : NSObject

{
    NSString *_filePath;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *identifier;

@end
