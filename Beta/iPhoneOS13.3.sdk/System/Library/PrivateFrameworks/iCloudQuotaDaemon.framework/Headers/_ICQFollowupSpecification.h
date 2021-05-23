/*
 Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

#import <Foundation/NSObject.h>

@class ICQLink, NSArray, NSDictionary, NSString;

@interface _ICQFollowupSpecification : NSObject

{
    NSDictionary *_serverDict;
    _Bool _forAccountGroup;
    _Bool _zeroAction;
    NSString *_title;
    NSString *_message;
    NSString *_altMessage;
    NSArray *_links;
    NSString *_noteTitle;
    NSString *_noteMessage;
    NSString *_altNoteMessage;
    ICQLink *_noteActivateLink;
    ICQLink *_noteClearLink;
}

@property (retain, nonatomic) NSDictionary *serverDict;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *altMessage;
@property (retain, nonatomic) NSArray *links;
@property (retain, nonatomic) NSString *noteTitle;
@property (retain, nonatomic) NSString *noteMessage;
@property (retain, nonatomic) NSString *altNoteMessage;
@property (retain, nonatomic) ICQLink *noteActivateLink;
@property (retain, nonatomic) ICQLink *noteClearLink;
@property (nonatomic, getter=isForAccountGroup) _Bool forAccountGroup;
@property (nonatomic, getter=isZeroAction) _Bool zeroAction;

+ (void)clearFollowupWithController:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (id)init;
- (id)initWithServerDictionary:(id)arg1;
- (void)postFollowupWithController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)followupActionForLink:(id)arg1 needsFlow:(_Bool)arg2;
- (id)followupActionForLink:(id)arg1;
- (void)postFollowupWithController:(id)arg1;

@end
