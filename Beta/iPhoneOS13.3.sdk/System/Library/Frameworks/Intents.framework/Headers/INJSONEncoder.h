/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface INJSONEncoder : NSObject

{
    NSString *_languageCode;
}

@property (copy, nonatomic) NSString *languageCode;

- (id)encodeObject:(id)arg1;
- (id)encodeObject:(id)arg1 withCodableDescription:(id)arg2;
- (id)encodeObject:(id)arg1 withCodableAttribute:(id)arg2;
- (id)_encodeObject:(id)arg1 codableAttribute:(id)arg2;

@end
