/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLMicroBlogUserRecord.h>

#import <Social/Swift-Protocol.h>

@class NSNumber, NSURL;

@interface SLWeiboUserRecord : SLMicroBlogUserRecord <Swift>

{
    NSNumber *_uid;
    NSURL *_objectID;
}

@property (retain, nonatomic) NSURL *objectID;
@property (copy, nonatomic) NSNumber *uid;

+ (_Bool)supportsSecureCoding;
+ (id)userRecordWithDictionaryRepresentation:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValuesWithUserDictionary:(id)arg1;

@end
