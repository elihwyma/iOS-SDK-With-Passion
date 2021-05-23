/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class NSDate, NSString;

@interface _PSMapsPredictionContext : NSObject

{
    NSDate *_suggestionDate;
    NSString *_bundleID;
    NSString *_navigationStartLocationId;
    NSString *_navigationEndLocationId;
}

@property (copy, nonatomic) NSDate *suggestionDate;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *navigationStartLocationId;
@property (copy, nonatomic) NSString *navigationEndLocationId;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
