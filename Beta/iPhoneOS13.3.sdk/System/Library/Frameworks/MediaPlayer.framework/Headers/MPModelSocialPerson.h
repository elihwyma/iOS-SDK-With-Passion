/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelPerson.h>

@class NSString;

@interface MPModelSocialPerson : MPModelPerson

@property (copy, nonatomic) NSString *uncensoredName;
@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *biography;
@property (nonatomic, getter=isPrivate) _Bool privatePerson;
@property (nonatomic, getter=isVerified) _Bool verified;
@property (nonatomic) long long pendingRequestsCount;
@property (copy, nonatomic) CDUnknownBlockType artworkCatalogBlock;

+ (id)kind;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__handle_KEY;
+ (id)__uncensoredName_KEY;
+ (id)__biography_KEY;
+ (id)__privatePerson_KEY;
+ (id)__verified_KEY;
+ (id)__pendingRequestsCount_KEY;

- (id)artworkCatalog;

@end
