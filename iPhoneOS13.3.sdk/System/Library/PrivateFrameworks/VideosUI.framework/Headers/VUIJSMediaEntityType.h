//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <VideosUI/VUIJSMediaEntityTypeExport-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIJSMediaEntityType : IKJSObject <VUIJSMediaEntityTypeExport>
{
    NSString *_subtype;
    NSString *_category;
    NSString *_collectionType;
}

+ (id)homeVideo;
+ (id)rental;
+ (id)movie;
+ (id)episode;
+ (id)season;
+ (id)show;
@property(retain, nonatomic) NSString *collectionType; // @synthesize collectionType=_collectionType;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithMediaEntitySubtype:(id)arg1 category:(id)arg2 collectionType:(id)arg3 appContext:(id)arg4;
- (id)initWithAppContext:(id)arg1;

@end

