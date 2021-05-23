/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, NSURL;

@interface HFDefaultRoomSuggestionVendor : NSObject

{
    NSSet *_roomSuggestions;
    NSURL *_roomSuggestionsPlistURL;
}

@property (nonatomic, readonly) NSURL *roomSuggestionsPlistURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSSet *roomSuggestions;

+ (id)TVAccessorySuggestionVendor;
+ (id)homeAppSuggestionVendor;

- (id)init;
- (id)initWithRoomSuggestionsPlistURL:(id)arg1;
- (id)prioritizedRoomSuggestions;

@end
