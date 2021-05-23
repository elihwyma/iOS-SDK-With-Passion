/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface AVAudioSessionDataSourceDescription : NSObject

{
    void *_impl;
}

@property (readonly) NSNumber *dataSourceID;
@property (readonly) NSString *dataSourceName;
@property (readonly) NSString *location;
@property (readonly) NSString *orientation;
@property (readonly) NSArray *supportedPolarPatterns;
@property (readonly) NSString *selectedPolarPattern;
@property (readonly) NSString *preferredPolarPattern;

+ (id)privateCreateArray:(id)arg1 portID:(id)arg2 sessionID:(unsigned int)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithSessionID:(unsigned int)arg1;
- (_Bool)isEqualToDataSource:(id)arg1;
- (_Bool)setPreferredPolarPattern:(id)arg1 error:(id *)arg2;
- (struct DataSourceDescriptionImpl *)privateGetImplementation;
- (_Bool)privateMatchesRawDescription:(id)arg1;
- (id)initWithRawSourceDescription:(id)arg1 andOwningPortID:(id)arg2 andSessionID:(unsigned int)arg3;
- (void)configurePolarPatterns:(id)arg1;
- (id)privateGetOwningPortID;

@end
