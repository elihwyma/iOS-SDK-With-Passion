//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface MFDAFolderChangeResult : NSObject
{
    long long _statusCode;
    NSError *_error;
    NSString *_folderID;
    NSString *_folderName;
}

@property(readonly) NSString *folderName; // @synthesize folderName=_folderName;
@property(readonly) NSString *folderID; // @synthesize folderID=_folderID;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) long long statusCode; // @synthesize statusCode=_statusCode;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)wasSuccessful;
- (id)initWithStatusCode:(long long)arg1 error:(id)arg2 folderID:(id)arg3 folderName:(id)arg4;

@end

