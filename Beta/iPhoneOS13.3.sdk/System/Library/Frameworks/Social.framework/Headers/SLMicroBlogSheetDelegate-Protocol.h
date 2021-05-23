/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

@protocol SLMicroBlogSheetDelegate

@property (copy, nonatomic) CDUnknownBlockType locationInformationChangedBlock;

- (unsigned short)setActiveAccountIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchSessionInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchProfileImageDataForScreenName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)recordsMatchingPrefixString:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCurrentUrlLimits: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCurrentImageLimits: /* Error: Ran out of types for this method. */;
- (unsigned short)setGeotagStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchGeotagStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)sendStatus:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)beginPotentialLocationUse;
- (unsigned short)endPotentialLocationUse;
- (unsigned short)showSettingsIfNeeded;
- (unsigned short)serviceAccountTypeIdentifier;
- (unsigned short)deferExpensiveOperations;
- (unsigned short)stopDeferringExpensiveOperations;
- (unsigned short)logDidSendStatusWithText:attachments:locationAttached:fromProcessWithPID: /* Error: Ran out of types for this method. */;

@end
