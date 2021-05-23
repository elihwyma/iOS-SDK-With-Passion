/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class NSDate, NSString, NSURL, NSUUID;

@interface _PSAttachment : NSObject

{
    NSDate *_creationDate;
    NSString *_UTI;
    NSString *_photoLocalIdentifier;
    NSUUID *_identifier;
    NSUUID *_cloudIdentifier;
    NSURL *_contentURL;
    NSString *_contentText;
}

@property (copy, nonatomic, readonly) NSDate *creationDate;
@property (copy, nonatomic, readonly) NSString *UTI;
@property (copy, nonatomic, readonly) NSString *photoLocalIdentifier;
@property (copy, nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic, readonly) NSUUID *cloudIdentifier;
@property (copy, nonatomic, readonly) NSURL *contentURL;
@property (copy, nonatomic, readonly) NSString *contentText;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCreationDate:(id)arg1 UTI:(id)arg2 photoLocalIdentifier:(id)arg3 identifier:(id)arg4 cloudIdentifier:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7;

@end
