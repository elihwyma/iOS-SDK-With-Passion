/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSString, NSURL, SAUIImageResource;

@interface SAVCSContentDetailPage : SAAceView

@property (copy, nonatomic) NSString *contentType;
@property (retain, nonatomic) SAUIImageResource *image;
@property (copy, nonatomic) NSString *imagesJsonContentPayload;
@property (nonatomic) _Bool isEvod;
@property (copy, nonatomic) NSString *loadingText;
@property (copy, nonatomic) NSString *seasonId;
@property (copy, nonatomic) NSString *showId;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) _Bool userDriven;
@property (copy, nonatomic) NSString *utsId;
@property (copy, nonatomic) NSURL *utsSearchUrl;

+ (id)contentDetailPage;
+ (id)contentDetailPageWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
