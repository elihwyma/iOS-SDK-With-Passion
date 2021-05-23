/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFUserActivityData;

@interface SFPunchout : NSObject <Swift>

{
    struct {
        unsigned int isRunnableInBackground:1;
    } _has;
    _Bool _isRunnableInBackground;
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_label;
    NSArray *_urls;
    SFUserActivityData *_userActivityData;
    NSString *_actionTarget;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *urls;
@property (retain, nonatomic) SFUserActivityData *userActivityData;
@property (copy, nonatomic) NSString *actionTarget;
@property (nonatomic) _Bool isRunnableInBackground;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;
+ (id)punchoutWithURLs:(id)arg1;
+ (id)punchoutWithURL:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)canOpenURL:(id)arg1;
- (id)preferredOpenableURL;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasIsRunnableInBackground;

@end
