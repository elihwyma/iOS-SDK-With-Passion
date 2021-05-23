/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/Swift-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface GKQuickAction : NSObject <Swift>

{
    NSString *_type;
    NSString *_identifier;
    NSDictionary *_imageURLDictionary;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_titleText;
    NSString *_subText;
    NSDate *_date;
    NSString *_gameBundleID;
    NSString *_launchURL;
    NSData *_imageData;
}

@property (retain) NSString *type;
@property (retain) NSString *identifier;
@property (retain) NSDictionary *imageURLDictionary;
@property (retain) NSString *firstName;
@property (retain) NSString *lastName;
@property (retain) NSString *titleText;
@property (retain) NSString *subText;
@property (retain) NSDate *date;
@property (retain) NSString *gameBundleID;
@property (retain) NSString *launchURL;
@property (retain) NSData *imageData;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSBSApplicationShortcutItem:(id)arg1;
- (id)shortcutItem;
- (id)initWithMatch:(id)arg1;
- (id)initWithChallenge:(id)arg1;
- (id)initWithInvite:(id)arg1;
- (void)loadImageDataForDesiredSize:(long long)arg1 scale:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (void)processAction;

@end
