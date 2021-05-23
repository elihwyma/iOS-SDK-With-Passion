/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFResultSection : NSObject <Swift>

{
    NSArray *_results;
    unsigned long long _maxInitiallyVisibleResults;
    NSString *_identifier;
    NSString *_bundleIdentifier;
    NSString *_title;
    NSString *_moreText;
    double _rankingScore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSArray *results;
@property (nonatomic) unsigned long long maxInitiallyVisibleResults;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *moreText;
@property (nonatomic) double rankingScore;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
