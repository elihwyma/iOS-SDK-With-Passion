/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSDictionary;

@interface TMLJSONSchema : NSObject

{
    NSDictionary *_schema;
}

- (id)init;
- (id)initWithString:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)propertyForKeyPath:(id)arg1;

@end
