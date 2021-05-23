/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INDateComponentsRange, NSArray, NSString;

@interface INMediaSearch : NSObject <Swift>

{
    long long _mediaType;
    long long _sortOrder;
    NSString *_mediaName;
    NSString *_artistName;
    NSString *_albumName;
    NSArray *_genreNames;
    NSArray *_moodNames;
    INDateComponentsRange *_releaseDate;
    long long _reference;
    NSString *_mediaIdentifier;
}

@property (copy, nonatomic, readonly) NSArray *activityNames;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) long long sortOrder;
@property (copy, nonatomic, readonly) NSString *mediaName;
@property (copy, nonatomic, readonly) NSString *artistName;
@property (copy, nonatomic, readonly) NSString *albumName;
@property (copy, nonatomic, readonly) NSArray *genreNames;
@property (copy, nonatomic, readonly) NSArray *moodNames;
@property (copy, nonatomic, readonly) INDateComponentsRange *releaseDate;
@property (nonatomic, readonly) long long reference;
@property (copy, nonatomic, readonly) NSString *mediaIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithMediaType:(long long)arg1 sortOrder:(long long)arg2 mediaName:(id)arg3 artistName:(id)arg4 albumName:(id)arg5 genreNames:(id)arg6 moodNames:(id)arg7 activityNames:(id)arg8 releaseDate:(id)arg9 reference:(long long)arg10 mediaIdentifier:(id)arg11;
- (id)initWithMediaType:(long long)arg1 sortOrder:(long long)arg2 mediaName:(id)arg3 artistName:(id)arg4 albumName:(id)arg5 genreNames:(id)arg6 moodNames:(id)arg7 releaseDate:(id)arg8 reference:(long long)arg9 mediaIdentifier:(id)arg10;

@end
