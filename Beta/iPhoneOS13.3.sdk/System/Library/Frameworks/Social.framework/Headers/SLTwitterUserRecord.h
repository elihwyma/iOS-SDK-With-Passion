/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLMicroBlogUserRecord.h>

#import <Social/Swift-Protocol.h>

@class NSString, NSURL;

@interface SLTwitterUserRecord : SLMicroBlogUserRecord <Swift>

{
    NSString *_id_str;
    NSURL *_objectID;
}

@property (retain, nonatomic) NSURL *objectID;
@property (retain, nonatomic) NSString *id_str;

+ (_Bool)supportsSecureCoding;
+ (id)userRecordWithDictionaryRepresentation:(id)arg1;
+ (id)userRecordWithScreenName:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValuesWithUserDictionary:(id)arg1;

@end
