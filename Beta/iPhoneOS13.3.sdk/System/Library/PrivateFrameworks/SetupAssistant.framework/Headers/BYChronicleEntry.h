/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSString;

@interface BYChronicleEntry : NSObject

{
    NSString *_productVersion;
}

@property (retain, nonatomic) NSString *productVersion;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithProductVersion:(id)arg1;
- (_Bool)isEqualToEntry:(id)arg1;
- (_Bool)createdOnCurrentMajorVersion;

@end
