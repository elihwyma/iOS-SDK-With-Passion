/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface IMSPISuggestionsObject : NSObject

{
    NSString *_chatGUID;
    NSString *_displayName;
    NSArray *_participants;
}

@property (readonly) NSString *chatGUID;
@property (readonly) NSString *displayName;
@property (readonly) NSArray *participants;

- (id)description;
- (id)initWithChatGuid:(id)arg1 displayName:(id)arg2 participants:(id)arg3;

@end
